gcloud compute backend-buckets create news-backend-bucket \
    --gcs-bucket-name=news-static-bucket \
    --enable-cdn

gcloud compute backend-buckets update news-backend-bucket \
    --cache-mode=CACHE_ALL_STATIC \
    --default-ttl=3600 \
    --max-ttl=86400 \
    --compression-mode=AUTOMATIC

gcloud compute url-maps create news-url-map \
    --default-backend-bucket=news-backend-bucket

gcloud compute target-http-proxies create news-http-proxy \
    --url-map=news-url-map

gcloud compute addresses create news-global-ip \
    --ip-version=IPV4 \
    --global

gcloud compute forwarding-rules create news-http-forwarding-rule \
    --address=news-global-ip \
    --global \
    --target-http-proxy=news-http-proxy \
    --ports=80

gcloud compute ssl-certificates create news-ssl-cert \
    --domains=www.yournewsdomain.com

gcloud compute target-https-proxies create news-https-proxy \
    --url-map=news-url-map \
    --ssl-certificates=news-ssl-cert

gcloud compute forwarding-rules create news-https-forwarding-rule \
    --address=news-global-ip \
    --global \
    --target-https-proxy=news-https-proxy \
    --ports=443

gcloud compute backend-buckets create news-backend-bucket \
    --gcs-bucket-name=news-static-bucket \
    --enable-cdn
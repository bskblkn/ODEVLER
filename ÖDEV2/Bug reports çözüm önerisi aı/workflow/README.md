# n8n Workflow

Bu klasördeki `n8n-workflow.json`, GitHub için temizlenmiş workflow export dosyasıdır.

## Önemli

Bu dosyada gerçek API key, SMTP şifresi, Airtable token veya Google credential bilgisi yoktur. Workflow n8n içine import edildikten sonra aşağıdaki credential alanları yeniden bağlanmalıdır:

- Google Drive OAuth2 credential
- Airtable Personal Access Token credential
- SMTP/Gmail App Password credential
- Groq API key header değeri
- OpenRouter API key header değeri

## Import

1. n8n üzerinde yeni workflow açın.
2. Menüden import seçeneğiyle `n8n-workflow.json` dosyasını içe aktarın.
3. Credential alanlarını kendi hesaplarınızla yeniden bağlayın.
4. Webhook production URL değerini Fillout entegrasyonuna ekleyin.

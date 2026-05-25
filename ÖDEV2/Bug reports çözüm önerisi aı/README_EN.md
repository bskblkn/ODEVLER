# Bug Report → Solution Proposal AI

This project is an AI-supported workflow automation system for collecting user-submitted bug reports, analyzing them, storing structured records, uploading attachments, and sending e-mail notifications.

## Project Summary

The system receives bug reports from a Fillout form and processes them through an n8n workflow. If an audio file is submitted, Groq Whisper generates a transcript. OpenRouter produces a structured bug analysis including summary, category, severity and suggested solution. Results are stored in Airtable, attachments are uploaded to Google Drive, and a Gmail/SMTP notification is sent.

## Repository Structure

```text
reports/   Turkish and English project reports
workflow/  Sanitized n8n workflow JSON export
assets/    Workflow screenshots
docs/      Setup and project documentation
```

## Tools Used

- Fillout
- n8n
- OpenRouter
- Groq Whisper
- Airtable
- Google Drive
- Gmail/SMTP

## Security Note

The `workflow/n8n-workflow.json` file is sanitized for GitHub. Real API keys, SMTP passwords and tokens are not included. After importing the workflow into n8n, credentials must be configured again.

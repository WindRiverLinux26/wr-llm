HOMEPAGE = "https://ollama.com/library/qwen3.5"
SUMMARY = "Qwen 3.5 is a family of open-source multimodal models that delivers \
exceptional utility and performance."
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://sha256-${LICESE_SHA256};md5=74a71048faae6970e5803fc65b388bf1"
BPN = "qwen3.5"

LICESE_SHA256 = "7339fa418c9ad3e8e12e74ad0fd26a9cc4be8703f9c110728a992b193be85cb2"
PARAMS_SHA256 = "9371364b27a52acac9d87f88bd93c9db1174d8d6ec57f6888925cdc1788871ff"

inherit ollama-model

# No template for qwem3.5
SRC_URI_TEMPLATE = ""

FILES:${PN}-common += " \
    ${datadir}/ollama/models/blobs/sha256-${PARAMS_SHA256} \
"

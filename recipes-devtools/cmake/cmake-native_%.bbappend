require ${@bb.utils.contains('DISTRO_FEATURES', 'ollama', '${PN}-llm.inc', '', d)}

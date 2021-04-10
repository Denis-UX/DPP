#pragma once

namespace dpp {

/** intents are a bitmask of allowed events on your websocket.
 * Some of these are known as Privileged intents (GUILD_MEMBERS and GUILD_PRESENCES)
 * and require verification of a bot over 100 servers by discord via submission of
 * your real life ID.
 */
enum intents {
	i_guilds			= (1 << 0),
	i_guild_members			= (1 << 1),
	i_guild_bans			= (1 << 2),
	i_guild_emojis			= (1 << 3),
	i_guild_integrations		= (1 << 4),
	i_guild_webhooks		= (1 << 5),
	i_guild_invites			= (1 << 6),
	i_guild_voice_states		= (1 << 7),
	i_guild_presences		= (1 << 8),
	i_guild_messages		= (1 << 9),
	i_guild_message_reactions	= (1 << 10),
	i_guild_message_typing		= (1 << 11),
	i_direct_messages		= (1 << 12),
	i_direct_message_reactions	= (1 << 13),
	i_direct_message_typing		= (1 << 14)
};

#define i_default_intents	dpp::i_guilds | dpp::i_guild_bans | dpp::i_guild_emojis | dpp::i_guild_integrations | dpp::i_guild_webhooks | dpp::i_guild_invites | dpp::i_guild_voice_states | dpp::i_guild_messages | dpp::i_guild_message_reactions | dpp::i_guild_message_typing | dpp::i_direct_messages | dpp::i_direct_message_typing | dpp::i_direct_message_reactions
#define i_privileged intents	dpp::i_guild_members | dpp::i_guild_presences
#define i_all_intents		i_default_intents | i_privileged_intents

};

#import "MVChatRoom.h"
#import "MVChatRoomPrivate.h"
#include <libsilcclient/client.h>
#include <libsilc/silcincludes.h>

@class MVSILCChatConnection;

@interface MVSILCChatRoom : MVChatRoom {
	SilcChannelEntry _channelEntry;
}
- (id) initWithChannelEntry:(SilcChannelEntry) channelEntry andConnection:(MVSILCChatConnection *) connection;

- (SilcChannelEntry) _getChannelEntry;

- (void) _setChannelUserMode:(unsigned int)SilcMode forUser:(MVChatUser *) user;
- (void) _removeChannelUserMode:(unsigned int)SilcMode forUser:(MVChatUser *) user;

- (void) updateWithChannelEntry:(SilcChannelEntry) channelEntry;
@end

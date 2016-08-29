///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMListMembersDevicesArg;

/// 
/// The `DBXTEAMListMembersDevicesArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMListMembersDevicesArg : NSObject <DBXSerializable> 

/// At the first call to the devicesListMembersDevices the cursor shouldn't be
/// passed. Then, if the result of the call includes a cursor, the following
/// requests should include the received cursors in order to receive the next
/// sub list of team devices
@property (nonatomic, readonly, copy) NSString * _Nullable cursor;

/// Whether to list web sessions of the team members
@property (nonatomic, readonly, copy) NSNumber * _Nonnull includeWebSessions;

/// Whether to list desktop clients of the team members
@property (nonatomic, readonly, copy) NSNumber * _Nonnull includeDesktopClients;

/// Whether to list mobile clients of the team members
@property (nonatomic, readonly, copy) NSNumber * _Nonnull includeMobileClients;

/// Full constructor for the `ListMembersDevicesArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithCursor:(NSString * _Nullable)cursor includeWebSessions:(NSNumber * _Nullable)includeWebSessions includeDesktopClients:(NSNumber * _Nullable)includeDesktopClients includeMobileClients:(NSNumber * _Nullable)includeMobileClients;

/// Convenience constructor for the `ListMembersDevicesArg` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)init;

@end


/// 
/// The serialization class for the `DBXTEAMListMembersDevicesArg` struct.
/// 
@interface DBXTEAMListMembersDevicesArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMListMembersDevicesArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMListMembersDevicesArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMListMembersDevicesArg` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMListMembersDevicesArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

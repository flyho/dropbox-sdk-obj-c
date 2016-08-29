///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMListMemberAppsArg;

/// 
/// The `DBXTEAMListMemberAppsArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMListMemberAppsArg : NSObject <DBXSerializable> 

/// The team member id
@property (nonatomic, readonly, copy) NSString * _Nonnull teamMemberId;

/// Full constructor for the `ListMemberAppsArg` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithTeamMemberId:(NSString * _Nonnull)teamMemberId;

@end


/// 
/// The serialization class for the `DBXTEAMListMemberAppsArg` struct.
/// 
@interface DBXTEAMListMemberAppsArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMListMemberAppsArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMListMemberAppsArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMListMemberAppsArg` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMListMemberAppsArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

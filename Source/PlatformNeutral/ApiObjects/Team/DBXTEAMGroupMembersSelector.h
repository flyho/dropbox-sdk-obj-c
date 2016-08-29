///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupMembersSelector;
@class DBXTEAMGroupSelector;
@class DBXTEAMUsersSelectorArg;

/// 
/// The `DBXTEAMGroupMembersSelector` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Argument for selecting a group and a list of users.
/// 
@interface DBXTEAMGroupMembersSelector : NSObject <DBXSerializable> 

/// Specify a group.
@property (nonatomic, readonly) DBXTEAMGroupSelector * _Nonnull group;

/// A list of users that are members of group.
@property (nonatomic, readonly) DBXTEAMUsersSelectorArg * _Nonnull users;

/// Full constructor for the `GroupMembersSelector` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithGroup:(DBXTEAMGroupSelector * _Nonnull)group users:(DBXTEAMUsersSelectorArg * _Nonnull)users;

@end


/// 
/// The serialization class for the `DBXTEAMGroupMembersSelector` struct.
/// 
@interface DBXTEAMGroupMembersSelectorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGroupMembersSelector` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupMembersSelector * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGroupMembersSelector` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMGroupMembersSelector * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGGroupMembershipInfo;
@class DBXSHARINGInviteeMembershipInfo;
@class DBXSHARINGSharedFileMembers;
@class DBXSHARINGUserMembershipInfo;

/// 
/// The `DBXSHARINGSharedFileMembers` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Shared file user, group, and invitee membership. Used for the results of
/// listFileMembers and listFileMembersContinue, and used as part of the results
/// for listFileMembersBatch.
/// 
@interface DBXSHARINGSharedFileMembers : NSObject <DBXSerializable> 

/// The list of user members of the shared file.
@property (nonatomic, readonly) NSArray<DBXSHARINGUserMembershipInfo *> * _Nonnull users;

/// The list of group members of the shared file.
@property (nonatomic, readonly) NSArray<DBXSHARINGGroupMembershipInfo *> * _Nonnull groups;

/// The list of invited members of a file, but have not logged in and claimed
/// this.
@property (nonatomic, readonly) NSArray<DBXSHARINGInviteeMembershipInfo *> * _Nonnull invitees;

/// Present if there are additional shared file members that have not been
/// returned yet. Pass the cursor into listFileMembersContinue to list
/// additional members.
@property (nonatomic, readonly, copy) NSString * _Nullable cursor;

/// Full constructor for the `SharedFileMembers` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithUsers:(NSArray<DBXSHARINGUserMembershipInfo *> * _Nonnull)users groups:(NSArray<DBXSHARINGGroupMembershipInfo *> * _Nonnull)groups invitees:(NSArray<DBXSHARINGInviteeMembershipInfo *> * _Nonnull)invitees cursor:(NSString * _Nullable)cursor;

/// Convenience constructor for the `SharedFileMembers` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithUsers:(NSArray<DBXSHARINGUserMembershipInfo *> * _Nonnull)users groups:(NSArray<DBXSHARINGGroupMembershipInfo *> * _Nonnull)groups invitees:(NSArray<DBXSHARINGInviteeMembershipInfo *> * _Nonnull)invitees;

@end


/// 
/// The serialization class for the `DBXSHARINGSharedFileMembers` struct.
/// 
@interface DBXSHARINGSharedFileMembersSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGSharedFileMembers` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGSharedFileMembers * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGSharedFileMembers` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGSharedFileMembers * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

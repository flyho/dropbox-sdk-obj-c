///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGAclUpdatePolicy;
@class DBXSHARINGMemberPolicy;
@class DBXSHARINGSharedLinkPolicy;
@class DBXSHARINGUpdateFolderPolicyArg;

/// 
/// The `DBXSHARINGUpdateFolderPolicyArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// If any of the policy's are unset, then they retain their current setting.
/// 
@interface DBXSHARINGUpdateFolderPolicyArg : NSObject <DBXSerializable> 

/// The ID for the shared folder.
@property (nonatomic, readonly, copy) NSString * _Nonnull sharedFolderId;

/// Who can be a member of this shared folder. Only applicable if the current
/// user is on a team.
@property (nonatomic, readonly) DBXSHARINGMemberPolicy * _Nullable memberPolicy;

/// Who can add and remove members of this shared folder.
@property (nonatomic, readonly) DBXSHARINGAclUpdatePolicy * _Nullable aclUpdatePolicy;

/// The policy to apply to shared links created for content inside this shared
/// folder. The current user must be on a team to set this policy to members in
/// SharedLinkPolicy.
@property (nonatomic, readonly) DBXSHARINGSharedLinkPolicy * _Nullable sharedLinkPolicy;

/// Full constructor for the `UpdateFolderPolicyArg` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId memberPolicy:(DBXSHARINGMemberPolicy * _Nullable)memberPolicy aclUpdatePolicy:(DBXSHARINGAclUpdatePolicy * _Nullable)aclUpdatePolicy sharedLinkPolicy:(DBXSHARINGSharedLinkPolicy * _Nullable)sharedLinkPolicy;

/// Convenience constructor for the `UpdateFolderPolicyArg` struct (exposes only
/// non-nullable instance variables with no default value).
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId;

@end


/// 
/// The serialization class for the `DBXSHARINGUpdateFolderPolicyArg` struct.
/// 
@interface DBXSHARINGUpdateFolderPolicyArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGUpdateFolderPolicyArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGUpdateFolderPolicyArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGUpdateFolderPolicyArg` object
/// from a json-compatible dictionary representation.
+ (DBXSHARINGUpdateFolderPolicyArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGSharedFolderAccessError;
@class DBXSHARINGUpdateFolderPolicyError;

/// 
/// The `DBXSHARINGUpdateFolderPolicyError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGUpdateFolderPolicyError : NSObject <DBXSerializable> 

/// The `DBXSHARINGUpdateFolderPolicyErrorTag` enum type represents the possible
/// tag states that the `DBXSHARINGUpdateFolderPolicyError` union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGUpdateFolderPolicyErrorTag) {
    /// (no description).
    DBXSHARINGUpdateFolderPolicyErrorAccessError,

    /// memberPolicy in UpdateFolderPolicyArg was set even though user is not on
    /// a team.
    DBXSHARINGUpdateFolderPolicyErrorNotOnTeam,

    /// Team policy is more restrictive than memberPolicy in ShareFolderArg.
    DBXSHARINGUpdateFolderPolicyErrorTeamPolicyDisallowsMemberPolicy,

    /// The current account is not allowed to select the specified
    /// sharedLinkPolicy in ShareFolderArg.
    DBXSHARINGUpdateFolderPolicyErrorDisallowedSharedLinkPolicy,

    /// The current user does not have permission to perform this action.
    DBXSHARINGUpdateFolderPolicyErrorNoPermission,

    /// (no description).
    DBXSHARINGUpdateFolderPolicyErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGUpdateFolderPolicyErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXSHARINGSharedFolderAccessError * _Nonnull accessError;

/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharedFolderAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `NotOnTeam`.
- (nonnull instancetype)initWithNotOnTeam;

/// Initializes union class with tag state of `TeamPolicyDisallowsMemberPolicy`.
- (nonnull instancetype)initWithTeamPolicyDisallowsMemberPolicy;

/// Initializes union class with tag state of `DisallowedSharedLinkPolicy`.
- (nonnull instancetype)initWithDisallowedSharedLinkPolicy;

/// Initializes union class with tag state of `NoPermission`.
- (nonnull instancetype)initWithNoPermission;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `NotOnTeam`.
- (BOOL)isNotOnTeam;

/// Returns whether the union's current tag state has value
/// `TeamPolicyDisallowsMemberPolicy`.
- (BOOL)isTeamPolicyDisallowsMemberPolicy;

/// Returns whether the union's current tag state has value
/// `DisallowedSharedLinkPolicy`.
- (BOOL)isDisallowedSharedLinkPolicy;

/// Returns whether the union's current tag state has value `NoPermission`.
- (BOOL)isNoPermission;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGUpdateFolderPolicyError` union.
/// 
@interface DBXSHARINGUpdateFolderPolicyErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGUpdateFolderPolicyError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGUpdateFolderPolicyError * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGUpdateFolderPolicyError` object
/// from a json-compatible dictionary representation.
+ (DBXSHARINGUpdateFolderPolicyError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

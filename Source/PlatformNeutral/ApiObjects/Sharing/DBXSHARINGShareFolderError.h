///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGShareFolderError;
@class DBXSHARINGSharePathError;

/// 
/// The `DBXSHARINGShareFolderError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGShareFolderError : NSObject <DBXSerializable> 

/// The `DBXSHARINGShareFolderErrorTag` enum type represents the possible tag
/// states that the `DBXSHARINGShareFolderError` union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGShareFolderErrorTag) {
    /// The current user's e-mail address is unverified.
    DBXSHARINGShareFolderErrorEmailUnverified,

    /// path in ShareFolderArg is invalid.
    DBXSHARINGShareFolderErrorBadPath,

    /// Team policy is more restrictive than memberPolicy in ShareFolderArg.
    DBXSHARINGShareFolderErrorTeamPolicyDisallowsMemberPolicy,

    /// The current user's account is not allowed to select the specified
    /// sharedLinkPolicy in ShareFolderArg.
    DBXSHARINGShareFolderErrorDisallowedSharedLinkPolicy,

    /// (no description).
    DBXSHARINGShareFolderErrorOther,

    /// The current user does not have permission to perform this action.
    DBXSHARINGShareFolderErrorNoPermission,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGShareFolderErrorTag tag;

/// path in ShareFolderArg is invalid.
@property (nonatomic, readonly) DBXSHARINGSharePathError * _Nonnull badPath;

/// Initializes union class with tag state of `EmailUnverified`.
- (nonnull instancetype)initWithEmailUnverified;

/// Initializes union class with tag state of `BadPath`.
- (nonnull instancetype)initWithBadPath:(DBXSHARINGSharePathError * _Nonnull)badPath;

/// Initializes union class with tag state of `TeamPolicyDisallowsMemberPolicy`.
- (nonnull instancetype)initWithTeamPolicyDisallowsMemberPolicy;

/// Initializes union class with tag state of `DisallowedSharedLinkPolicy`.
- (nonnull instancetype)initWithDisallowedSharedLinkPolicy;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Initializes union class with tag state of `NoPermission`.
- (nonnull instancetype)initWithNoPermission;

/// Returns whether the union's current tag state has value `EmailUnverified`.
- (BOOL)isEmailUnverified;

/// Returns whether the union's current tag state has value `BadPath`.
- (BOOL)isBadPath;

/// Returns whether the union's current tag state has value
/// `TeamPolicyDisallowsMemberPolicy`.
- (BOOL)isTeamPolicyDisallowsMemberPolicy;

/// Returns whether the union's current tag state has value
/// `DisallowedSharedLinkPolicy`.
- (BOOL)isDisallowedSharedLinkPolicy;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns whether the union's current tag state has value `NoPermission`.
- (BOOL)isNoPermission;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGShareFolderError` union.
/// 
@interface DBXSHARINGShareFolderErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGShareFolderError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGShareFolderError * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGShareFolderError` object from a
/// json-compatible dictionary representation.
+ (DBXSHARINGShareFolderError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

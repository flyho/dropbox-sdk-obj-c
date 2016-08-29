///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGSharedLinkAccessFailureReason;

/// 
/// The `DBXSHARINGSharedLinkAccessFailureReason` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGSharedLinkAccessFailureReason : NSObject <DBXSerializable> 

/// The `DBXSHARINGSharedLinkAccessFailureReasonTag` enum type represents the
/// possible tag states that the `DBXSHARINGSharedLinkAccessFailureReason` union
/// can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGSharedLinkAccessFailureReasonTag) {
    /// User is not logged in.
    DBXSHARINGSharedLinkAccessFailureReasonLoginRequired,

    /// User's email is not verified.
    DBXSHARINGSharedLinkAccessFailureReasonEmailVerifyRequired,

    /// The link is password protected.
    DBXSHARINGSharedLinkAccessFailureReasonPasswordRequired,

    /// Access is allowed for team members only.
    DBXSHARINGSharedLinkAccessFailureReasonTeamOnly,

    /// Access is allowed for the shared link's owner only.
    DBXSHARINGSharedLinkAccessFailureReasonOwnerOnly,

    /// (no description).
    DBXSHARINGSharedLinkAccessFailureReasonOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGSharedLinkAccessFailureReasonTag tag;

/// Initializes union class with tag state of `LoginRequired`.
- (nonnull instancetype)initWithLoginRequired;

/// Initializes union class with tag state of `EmailVerifyRequired`.
- (nonnull instancetype)initWithEmailVerifyRequired;

/// Initializes union class with tag state of `PasswordRequired`.
- (nonnull instancetype)initWithPasswordRequired;

/// Initializes union class with tag state of `TeamOnly`.
- (nonnull instancetype)initWithTeamOnly;

/// Initializes union class with tag state of `OwnerOnly`.
- (nonnull instancetype)initWithOwnerOnly;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `LoginRequired`.
- (BOOL)isLoginRequired;

/// Returns whether the union's current tag state has value
/// `EmailVerifyRequired`.
- (BOOL)isEmailVerifyRequired;

/// Returns whether the union's current tag state has value `PasswordRequired`.
- (BOOL)isPasswordRequired;

/// Returns whether the union's current tag state has value `TeamOnly`.
- (BOOL)isTeamOnly;

/// Returns whether the union's current tag state has value `OwnerOnly`.
- (BOOL)isOwnerOnly;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGSharedLinkAccessFailureReason`
/// union.
/// 
@interface DBXSHARINGSharedLinkAccessFailureReasonSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGSharedLinkAccessFailureReason` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGSharedLinkAccessFailureReason * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGSharedLinkAccessFailureReason`
/// object from a json-compatible dictionary representation.
+ (DBXSHARINGSharedLinkAccessFailureReason * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

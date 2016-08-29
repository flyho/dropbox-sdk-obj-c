///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESLookupError;
@class DBXSHARINGCreateSharedLinkWithSettingsError;
@class DBXSHARINGSharedLinkSettingsError;

/// 
/// The `DBXSHARINGCreateSharedLinkWithSettingsError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGCreateSharedLinkWithSettingsError : NSObject <DBXSerializable> 

/// The `DBXSHARINGCreateSharedLinkWithSettingsErrorTag` enum type represents
/// the possible tag states that the
/// `DBXSHARINGCreateSharedLinkWithSettingsError` union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGCreateSharedLinkWithSettingsErrorTag) {
    /// (no description).
    DBXSHARINGCreateSharedLinkWithSettingsErrorPath,

    /// User's email should be verified
    DBXSHARINGCreateSharedLinkWithSettingsErrorEmailNotVerified,

    /// The shared link already exists
    DBXSHARINGCreateSharedLinkWithSettingsErrorSharedLinkAlreadyExists,

    /// There is an error with the given settings
    DBXSHARINGCreateSharedLinkWithSettingsErrorSettingsError,

    /// Access to the requested path is forbidden
    DBXSHARINGCreateSharedLinkWithSettingsErrorAccessDenied,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGCreateSharedLinkWithSettingsErrorTag tag;

/// (no description).
@property (nonatomic, readonly) DBXFILESLookupError * _Nonnull path;

/// There is an error with the given settings
@property (nonatomic, readonly) DBXSHARINGSharedLinkSettingsError * _Nonnull settingsError;

/// Initializes union class with tag state of `Path`.
- (nonnull instancetype)initWithPath:(DBXFILESLookupError * _Nonnull)path;

/// Initializes union class with tag state of `EmailNotVerified`.
- (nonnull instancetype)initWithEmailNotVerified;

/// Initializes union class with tag state of `SharedLinkAlreadyExists`.
- (nonnull instancetype)initWithSharedLinkAlreadyExists;

/// Initializes union class with tag state of `SettingsError`.
- (nonnull instancetype)initWithSettingsError:(DBXSHARINGSharedLinkSettingsError * _Nonnull)settingsError;

/// Initializes union class with tag state of `AccessDenied`.
- (nonnull instancetype)initWithAccessDenied;

/// Returns whether the union's current tag state has value `Path`.
- (BOOL)isPath;

/// Returns whether the union's current tag state has value `EmailNotVerified`.
- (BOOL)isEmailNotVerified;

/// Returns whether the union's current tag state has value
/// `SharedLinkAlreadyExists`.
- (BOOL)isSharedLinkAlreadyExists;

/// Returns whether the union's current tag state has value `SettingsError`.
- (BOOL)isSettingsError;

/// Returns whether the union's current tag state has value `AccessDenied`.
- (BOOL)isAccessDenied;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the
/// `DBXSHARINGCreateSharedLinkWithSettingsError` union.
/// 
@interface DBXSHARINGCreateSharedLinkWithSettingsErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGCreateSharedLinkWithSettingsError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGCreateSharedLinkWithSettingsError * _Nonnull)obj;

/// Returns an instantiation of the
/// `DBXSHARINGCreateSharedLinkWithSettingsError` object from a json-compatible
/// dictionary representation.
+ (DBXSHARINGCreateSharedLinkWithSettingsError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
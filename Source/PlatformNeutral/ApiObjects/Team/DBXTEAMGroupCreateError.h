///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMGroupCreateError;

/// 
/// The `DBXTEAMGroupCreateError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMGroupCreateError : NSObject <DBXSerializable> 

/// The `DBXTEAMGroupCreateErrorTag` enum type represents the possible tag
/// states that the `DBXTEAMGroupCreateError` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMGroupCreateErrorTag) {
    /// There is already an existing group with the requested name.
    DBXTEAMGroupCreateErrorGroupNameAlreadyUsed,

    /// Group name is empty or has invalid characters.
    DBXTEAMGroupCreateErrorGroupNameInvalid,

    /// The new external ID is already being used by another group.
    DBXTEAMGroupCreateErrorExternalIdAlreadyInUse,

    /// (no description).
    DBXTEAMGroupCreateErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMGroupCreateErrorTag tag;

/// Initializes union class with tag state of `GroupNameAlreadyUsed`.
- (nonnull instancetype)initWithGroupNameAlreadyUsed;

/// Initializes union class with tag state of `GroupNameInvalid`.
- (nonnull instancetype)initWithGroupNameInvalid;

/// Initializes union class with tag state of `ExternalIdAlreadyInUse`.
- (nonnull instancetype)initWithExternalIdAlreadyInUse;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value
/// `GroupNameAlreadyUsed`.
- (BOOL)isGroupNameAlreadyUsed;

/// Returns whether the union's current tag state has value `GroupNameInvalid`.
- (BOOL)isGroupNameInvalid;

/// Returns whether the union's current tag state has value
/// `ExternalIdAlreadyInUse`.
- (BOOL)isExternalIdAlreadyInUse;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXTEAMGroupCreateError` union.
/// 
@interface DBXTEAMGroupCreateErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGroupCreateError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGroupCreateError * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGroupCreateError` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMGroupCreateError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESFileMetadata;
@class DBXFILESSaveUrlError;
@class DBXFILESSaveUrlJobStatus;

/// 
/// The `DBXFILESSaveUrlJobStatus` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESSaveUrlJobStatus : NSObject <DBXSerializable> 

/// The `DBXFILESSaveUrlJobStatusTag` enum type represents the possible tag
/// states that the `DBXFILESSaveUrlJobStatus` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESSaveUrlJobStatusTag) {
    /// The asynchronous job is still in progress.
    DBXFILESSaveUrlJobStatusInProgress,

    /// Metadata of the file where the URL is saved to.
    DBXFILESSaveUrlJobStatusComplete,

    /// (no description).
    DBXFILESSaveUrlJobStatusFailed,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESSaveUrlJobStatusTag tag;

/// Metadata of the file where the URL is saved to.
@property (nonatomic, readonly) DBXFILESFileMetadata * _Nonnull complete;

/// (no description).
@property (nonatomic, readonly) DBXFILESSaveUrlError * _Nonnull failed;

/// Initializes union class with tag state of `InProgress`.
- (nonnull instancetype)initWithInProgress;

/// Initializes union class with tag state of `Complete`.
- (nonnull instancetype)initWithComplete:(DBXFILESFileMetadata * _Nonnull)complete;

/// Initializes union class with tag state of `Failed`.
- (nonnull instancetype)initWithFailed:(DBXFILESSaveUrlError * _Nonnull)failed;

/// Returns whether the union's current tag state has value `InProgress`.
- (BOOL)isInProgress;

/// Returns whether the union's current tag state has value `Complete`.
- (BOOL)isComplete;

/// Returns whether the union's current tag state has value `Failed`.
- (BOOL)isFailed;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXFILESSaveUrlJobStatus` union.
/// 
@interface DBXFILESSaveUrlJobStatusSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESSaveUrlJobStatus` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESSaveUrlJobStatus * _Nonnull)obj;

/// Returns an instantiation of the `DBXFILESSaveUrlJobStatus` object from a
/// json-compatible dictionary representation.
+ (DBXFILESSaveUrlJobStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

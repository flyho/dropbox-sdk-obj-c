///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXASYNCPollError;

/// 
/// The `DBXASYNCPollError` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Error returned by methods for polling the status of asynchronous job.
/// 
@interface DBXASYNCPollError : NSObject <DBXSerializable> 

/// The `DBXASYNCPollErrorTag` enum type represents the possible tag states that
/// the `DBXASYNCPollError` union can exist in.
typedef NS_ENUM(NSInteger, DBXASYNCPollErrorTag) {
    /// The job ID is invalid.
    DBXASYNCPollErrorInvalidAsyncJobId,

    /// Something went wrong with the job on Dropbox's end. You'll need to
    /// verify that the action you were taking succeeded, and if not, try again.
    /// This should happen very rarely.
    DBXASYNCPollErrorInternalError,

    /// (no description).
    DBXASYNCPollErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXASYNCPollErrorTag tag;

/// Initializes union class with tag state of `InvalidAsyncJobId`.
- (nonnull instancetype)initWithInvalidAsyncJobId;

/// Initializes union class with tag state of `InternalError`.
- (nonnull instancetype)initWithInternalError;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `InvalidAsyncJobId`.
- (BOOL)isInvalidAsyncJobId;

/// Returns whether the union's current tag state has value `InternalError`.
- (BOOL)isInternalError;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXASYNCPollError` union.
/// 
@interface DBXASYNCPollErrorSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXASYNCPollError` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXASYNCPollError * _Nonnull)obj;

/// Returns an instantiation of the `DBXASYNCPollError` object from a
/// json-compatible dictionary representation.
+ (DBXASYNCPollError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXFILESFileMetadata;
@class DBXFILESUploadSessionFinishBatchResultEntry;
@class DBXFILESUploadSessionFinishError;

/// 
/// The `DBXFILESUploadSessionFinishBatchResultEntry` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXFILESUploadSessionFinishBatchResultEntry : NSObject <DBXSerializable> 

/// The `DBXFILESUploadSessionFinishBatchResultEntryTag` enum type represents
/// the possible tag states that the
/// `DBXFILESUploadSessionFinishBatchResultEntry` union can exist in.
typedef NS_ENUM(NSInteger, DBXFILESUploadSessionFinishBatchResultEntryTag) {
    /// (no description).
    DBXFILESUploadSessionFinishBatchResultEntrySuccess,

    /// (no description).
    DBXFILESUploadSessionFinishBatchResultEntryFailure,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXFILESUploadSessionFinishBatchResultEntryTag tag;

/// (no description).
@property (nonatomic, readonly) DBXFILESFileMetadata * _Nonnull success;

/// (no description).
@property (nonatomic, readonly) DBXFILESUploadSessionFinishError * _Nonnull failure;

/// Initializes union class with tag state of `Success`.
- (nonnull instancetype)initWithSuccess:(DBXFILESFileMetadata * _Nonnull)success;

/// Initializes union class with tag state of `Failure`.
- (nonnull instancetype)initWithFailure:(DBXFILESUploadSessionFinishError * _Nonnull)failure;

/// Returns whether the union's current tag state has value `Success`.
- (BOOL)isSuccess;

/// Returns whether the union's current tag state has value `Failure`.
- (BOOL)isFailure;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the
/// `DBXFILESUploadSessionFinishBatchResultEntry` union.
/// 
@interface DBXFILESUploadSessionFinishBatchResultEntrySerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXFILESUploadSessionFinishBatchResultEntry` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXFILESUploadSessionFinishBatchResultEntry * _Nonnull)obj;

/// Returns an instantiation of the
/// `DBXFILESUploadSessionFinishBatchResultEntry` object from a json-compatible
/// dictionary representation.
+ (DBXFILESUploadSessionFinishBatchResultEntry * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

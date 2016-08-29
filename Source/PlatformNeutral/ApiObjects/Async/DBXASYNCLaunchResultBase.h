///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXASYNCLaunchResultBase;

/// 
/// The `DBXASYNCLaunchResultBase` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Result returned by methods that launch an asynchronous job. A method who may
/// either launch an asynchronous job, or complete the request synchronously,
/// can use this union by extending it, and adding a 'complete' field with the
/// type of the synchronous response. See LaunchEmptyResult for an example.
/// 
@interface DBXASYNCLaunchResultBase : NSObject <DBXSerializable> 

/// The `DBXASYNCLaunchResultBaseTag` enum type represents the possible tag
/// states that the `DBXASYNCLaunchResultBase` union can exist in.
typedef NS_ENUM(NSInteger, DBXASYNCLaunchResultBaseTag) {
    /// This response indicates that the processing is asynchronous. The string
    /// is an id that can be used to obtain the status of the asynchronous job.
    DBXASYNCLaunchResultBaseAsyncJobId,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXASYNCLaunchResultBaseTag tag;

/// This response indicates that the processing is asynchronous. The string is
/// an id that can be used to obtain the status of the asynchronous job.
@property (nonatomic, readonly, copy) NSString * _Nonnull asyncJobId;

/// Initializes union class with tag state of `AsyncJobId`.
- (nonnull instancetype)initWithAsyncJobId:(NSString * _Nonnull)asyncJobId;

/// Returns whether the union's current tag state has value `AsyncJobId`.
- (BOOL)isAsyncJobId;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXASYNCLaunchResultBase` union.
/// 
@interface DBXASYNCLaunchResultBaseSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXASYNCLaunchResultBase` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXASYNCLaunchResultBase * _Nonnull)obj;

/// Returns an instantiation of the `DBXASYNCLaunchResultBase` object from a
/// json-compatible dictionary representation.
+ (DBXASYNCLaunchResultBase * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
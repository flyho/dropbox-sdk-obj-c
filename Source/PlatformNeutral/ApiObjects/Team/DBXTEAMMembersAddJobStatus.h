///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXTEAMMemberAddResult;
@class DBXTEAMMembersAddJobStatus;

/// 
/// The `DBXTEAMMembersAddJobStatus` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXTEAMMembersAddJobStatus : NSObject <DBXSerializable> 

/// The `DBXTEAMMembersAddJobStatusTag` enum type represents the possible tag
/// states that the `DBXTEAMMembersAddJobStatus` union can exist in.
typedef NS_ENUM(NSInteger, DBXTEAMMembersAddJobStatusTag) {
    /// The asynchronous job is still in progress.
    DBXTEAMMembersAddJobStatusInProgress,

    /// The asynchronous job has finished. For each member that was specified in
    /// the parameter MembersAddArg that was provided to membersAdd, a
    /// corresponding item is returned in this list.
    DBXTEAMMembersAddJobStatusComplete,

    /// The asynchronous job returned an error. The string contains an error
    /// message.
    DBXTEAMMembersAddJobStatusFailed,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXTEAMMembersAddJobStatusTag tag;

/// The asynchronous job has finished. For each member that was specified in the
/// parameter MembersAddArg that was provided to membersAdd, a corresponding
/// item is returned in this list.
@property (nonatomic, readonly) NSArray<DBXTEAMMemberAddResult *> * _Nonnull complete;

/// The asynchronous job returned an error. The string contains an error
/// message.
@property (nonatomic, readonly, copy) NSString * _Nonnull failed;

/// Initializes union class with tag state of `InProgress`.
- (nonnull instancetype)initWithInProgress;

/// Initializes union class with tag state of `Complete`.
- (nonnull instancetype)initWithComplete:(NSArray<DBXTEAMMemberAddResult *> * _Nonnull)complete;

/// Initializes union class with tag state of `Failed`.
- (nonnull instancetype)initWithFailed:(NSString * _Nonnull)failed;

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
/// The serialization class for the `DBXTEAMMembersAddJobStatus` union.
/// 
@interface DBXTEAMMembersAddJobStatusSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMMembersAddJobStatus` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMMembersAddJobStatus * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMMembersAddJobStatus` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMMembersAddJobStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

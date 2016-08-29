///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFileMembersCountResult;
@class DBXSHARINGListFileMembersIndividualResult;
@class DBXSHARINGSharingFileAccessError;

/// 
/// The `DBXSHARINGListFileMembersIndividualResult` union.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGListFileMembersIndividualResult : NSObject <DBXSerializable> 

/// The `DBXSHARINGListFileMembersIndividualResultTag` enum type represents the
/// possible tag states that the `DBXSHARINGListFileMembersIndividualResult`
/// union can exist in.
typedef NS_ENUM(NSInteger, DBXSHARINGListFileMembersIndividualResultTag) {
    /// The results of the query for this file if it was successful
    DBXSHARINGListFileMembersIndividualResultResult,

    /// The result of the query for this file if it was an error.
    DBXSHARINGListFileMembersIndividualResultAccessError,

    /// (no description).
    DBXSHARINGListFileMembersIndividualResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBXSHARINGListFileMembersIndividualResultTag tag;

/// The results of the query for this file if it was successful
@property (nonatomic, readonly) DBXSHARINGListFileMembersCountResult * _Nonnull result;

/// The result of the query for this file if it was an error.
@property (nonatomic, readonly) DBXSHARINGSharingFileAccessError * _Nonnull accessError;

/// Initializes union class with tag state of `Result`.
- (nonnull instancetype)initWithResult:(DBXSHARINGListFileMembersCountResult * _Nonnull)result;

/// Initializes union class with tag state of `AccessError`.
- (nonnull instancetype)initWithAccessError:(DBXSHARINGSharingFileAccessError * _Nonnull)accessError;

/// Initializes union class with tag state of `Other`.
- (nonnull instancetype)initWithOther;

/// Returns whether the union's current tag state has value `Result`.
- (BOOL)isResult;

/// Returns whether the union's current tag state has value `AccessError`.
- (BOOL)isAccessError;

/// Returns whether the union's current tag state has value `Other`.
- (BOOL)isOther;

/// Returns a human-readable string representing the union's current tag state.
- (NSString * _Nonnull)getTagName;

@end


/// 
/// The serialization class for the `DBXSHARINGListFileMembersIndividualResult`
/// union.
/// 
@interface DBXSHARINGListFileMembersIndividualResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersIndividualResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFileMembersIndividualResult * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGListFileMembersIndividualResult`
/// object from a json-compatible dictionary representation.
+ (DBXSHARINGListFileMembersIndividualResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

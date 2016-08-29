///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFileMembersBatchResult;
@class DBXSHARINGListFileMembersIndividualResult;

/// 
/// The `DBXSHARINGListFileMembersBatchResult` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Per-file result for listFileMembersBatch.
/// 
@interface DBXSHARINGListFileMembersBatchResult : NSObject <DBXSerializable> 

/// This is the input file identifier, whether an ID or a path.
@property (nonatomic, readonly, copy) NSString * _Nonnull file;

/// The result for this particular file
@property (nonatomic, readonly) DBXSHARINGListFileMembersIndividualResult * _Nonnull result;

/// Full constructor for the `ListFileMembersBatchResult` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithFile:(NSString * _Nonnull)file result:(DBXSHARINGListFileMembersIndividualResult * _Nonnull)result;

@end


/// 
/// The serialization class for the `DBXSHARINGListFileMembersBatchResult`
/// struct.
/// 
@interface DBXSHARINGListFileMembersBatchResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersBatchResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFileMembersBatchResult * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGListFileMembersBatchResult`
/// object from a json-compatible dictionary representation.
+ (DBXSHARINGListFileMembersBatchResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

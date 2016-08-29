///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGListFileMembersCountResult;
@class DBXSHARINGSharedFileMembers;

/// 
/// The `DBXSHARINGListFileMembersCountResult` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGListFileMembersCountResult : NSObject <DBXSerializable> 

/// A list of members on this file.
@property (nonatomic, readonly) DBXSHARINGSharedFileMembers * _Nonnull members;

/// The number of members on this file. This does not include inherited members
@property (nonatomic, readonly, copy) NSNumber * _Nonnull memberCount;

/// Full constructor for the `ListFileMembersCountResult` struct (exposes all
/// instance variables).
- (nonnull instancetype)initWithMembers:(DBXSHARINGSharedFileMembers * _Nonnull)members memberCount:(NSNumber * _Nonnull)memberCount;

@end


/// 
/// The serialization class for the `DBXSHARINGListFileMembersCountResult`
/// struct.
/// 
@interface DBXSHARINGListFileMembersCountResultSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGListFileMembersCountResult` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGListFileMembersCountResult * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGListFileMembersCountResult`
/// object from a json-compatible dictionary representation.
+ (DBXSHARINGListFileMembersCountResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
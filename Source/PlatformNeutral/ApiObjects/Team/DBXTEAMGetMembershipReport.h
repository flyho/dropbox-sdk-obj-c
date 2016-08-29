///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXTEAMBaseDfbReport.h"

@class DBXTEAMGetMembershipReport;

/// 
/// The `DBXTEAMGetMembershipReport` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Membership Report Result. Each of the items in the storage report is an
/// array of values, one value per day. If there is no data for a day, then the
/// value will be None.
/// 
@interface DBXTEAMGetMembershipReport : DBXTEAMBaseDfbReport <DBXSerializable> 

/// Team size, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull teamSize;

/// The number of pending invites to the team, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull pendingInvites;

/// The number of members that joined the team, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull membersJoined;

/// The number of suspended team members, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull suspendedMembers;

/// The total number of licenses the team has, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> * _Nonnull licenses;

/// Full constructor for the `GetMembershipReport` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithStartDate:(NSString * _Nonnull)startDate teamSize:(NSArray<NSNumber *> * _Nonnull)teamSize pendingInvites:(NSArray<NSNumber *> * _Nonnull)pendingInvites membersJoined:(NSArray<NSNumber *> * _Nonnull)membersJoined suspendedMembers:(NSArray<NSNumber *> * _Nonnull)suspendedMembers licenses:(NSArray<NSNumber *> * _Nonnull)licenses;

@end


/// 
/// The serialization class for the `DBXTEAMGetMembershipReport` struct.
/// 
@interface DBXTEAMGetMembershipReportSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGetMembershipReport` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGetMembershipReport * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGetMembershipReport` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMGetMembershipReport * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end

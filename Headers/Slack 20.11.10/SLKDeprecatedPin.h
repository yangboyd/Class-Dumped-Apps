//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface SLKDeprecatedPin : NSManagedObject
{
}

+ (id)pinForId:(id)arg1 contextType:(unsigned long long)arg2 dataRepository:(id)arg3;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, copy) NSString *channelId; // @dynamic channelId;
@property(nonatomic, copy) NSString *commentId; // @dynamic commentId;
@property(nonatomic) long long created; // @dynamic created;
@property(nonatomic, copy) NSString *fileId; // @dynamic fileId;
@property(nonatomic) _Bool markedForDeletion; // @dynamic markedForDeletion;
@property(nonatomic, copy) NSString *messageId; // @dynamic messageId;
@property(nonatomic, copy) NSString *tsid; // @dynamic tsid;
@property(nonatomic, copy) NSString *typeString; // @dynamic typeString;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface ComAmazonModelFeedService_Customer : CoralModel <NSCoding, NSCopying>
{
    NSNumber *_isRecognized;
    NSString *_fullName;
    NSString *_givenName;
    NSDictionary *_memberData;
    NSString *_notificationToken;
}

+ (id)mapTypeForProperty:(id)arg1;
+ (id)type;
@property(copy, nonatomic) NSString *notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) NSDictionary *memberData; // @synthesize memberData=_memberData;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSNumber *isRecognized; // @synthesize isRecognized=_isRecognized;
- (void).cxx_destruct;

@end


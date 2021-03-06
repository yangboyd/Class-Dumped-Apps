//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface AWERecommendTrackContext : NSObject
{
    NSString *_event;
    NSString *_enterFrom;
    NSString *_previousPage;
    NSString *_eventType;
    NSString *_userID;
    NSString *_requestID;
    NSString *_reason;
    NSString *_cardType;
    NSString *_itemID;
    NSString *_fromUserID;
    NSString *_pageStatus;
    NSString *_enterMethod;
    NSString *_awemeID;
    NSString *_authorID;
    NSString *_recommendUserType;
    NSNumber *_imprOrder;
    NSNumber *_subOrder;
    NSNumber *_feedOrder;
    NSMutableDictionary *_extraDic;
    NSMutableArray *_trackAttributes;
}

@property(retain, nonatomic) NSMutableArray *trackAttributes; // @synthesize trackAttributes=_trackAttributes;
@property(retain, nonatomic) NSMutableDictionary *extraDic; // @synthesize extraDic=_extraDic;
@property(retain, nonatomic) NSNumber *feedOrder; // @synthesize feedOrder=_feedOrder;
@property(retain, nonatomic) NSNumber *subOrder; // @synthesize subOrder=_subOrder;
@property(retain, nonatomic) NSNumber *imprOrder; // @synthesize imprOrder=_imprOrder;
@property(copy, nonatomic) NSString *recommendUserType; // @synthesize recommendUserType=_recommendUserType;
@property(copy, nonatomic) NSString *authorID; // @synthesize authorID=_authorID;
@property(copy, nonatomic) NSString *awemeID; // @synthesize awemeID=_awemeID;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSString *pageStatus; // @synthesize pageStatus=_pageStatus;
@property(copy, nonatomic) NSString *fromUserID; // @synthesize fromUserID=_fromUserID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)extraAttributes;
- (CDUnknownBlockType)attribute;
- (id)addAttribute:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SXRequestContextBuilder : NSObject
{
    NSString *_qid;
    NSString *_rid;
    NSString *_alias;
    NSString *_keywords;
    NSString *_store;
    NSNumber *_page;
}

@property(retain, nonatomic) NSNumber *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *store; // @synthesize store=_store;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (void).cxx_destruct;

@end


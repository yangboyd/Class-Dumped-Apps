//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NFUILolomoListIdentity : NSObject
{
    NSString *_trackID;
    NSString *_requestID;
    NSString *_listID;
    NSString *_listContext;
    unsigned long long _listType;
    long long _headerType;
    unsigned long long _lolomoIndex;
    unsigned long long _listIndex;
    NSString *_displayTitle;
    NSString *_impressionToken;
    NSString *_annotations;
}

@property(copy, nonatomic) NSString *annotations; // @synthesize annotations=_annotations;
@property(copy, nonatomic) NSString *impressionToken; // @synthesize impressionToken=_impressionToken;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(nonatomic) unsigned long long listIndex; // @synthesize listIndex=_listIndex;
@property(nonatomic) unsigned long long lolomoIndex; // @synthesize lolomoIndex=_lolomoIndex;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(copy, nonatomic) NSString *listContext; // @synthesize listContext=_listContext;
@property(copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *trackID; // @synthesize trackID=_trackID;
- (void).cxx_destruct;

@end


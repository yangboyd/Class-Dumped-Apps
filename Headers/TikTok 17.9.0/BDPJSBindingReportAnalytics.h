//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BDPJSBindingReportAnalytics : NSObject
{
    _Bool _needCommonParams;
    NSString *_event;
    NSDictionary *_value;
    NSString *_uniqueId;
}

@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) _Bool needCommonParams; // @synthesize needCommonParams=_needCommonParams;
@property(copy, nonatomic) NSDictionary *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
- (void).cxx_destruct;

@end


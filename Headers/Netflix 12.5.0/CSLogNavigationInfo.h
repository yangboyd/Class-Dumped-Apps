//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CSLogNavigationInfo : NSObject
{
    NSString *_viewName;
    NSDictionary *_trackingInfo;
}

+ (id)infoWithView:(id)arg1 trackingInfo:(id)arg2;
+ (id)infoWithBaseView:(id)arg1;
@property(retain, nonatomic) NSDictionary *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
@property(retain, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
- (void).cxx_destruct;
- (id)navigationData;

@end


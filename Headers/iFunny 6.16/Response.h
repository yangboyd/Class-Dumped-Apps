//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTBAdResponse;

@interface Response : NSObject
{
    double _timestamp;
    DTBAdResponse *_adResponse;
}

@property(retain, nonatomic) DTBAdResponse *adResponse; // @synthesize adResponse=_adResponse;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;

@end


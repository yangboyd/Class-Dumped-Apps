//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NRMAAppToken : NSObject
{
    NSString *_value;
    NSString *_regionCode;
}

@property(readonly) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(readonly) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)parseRegion:(id)arg1;
- (id)initWithApplicationToken:(id)arg1;

@end


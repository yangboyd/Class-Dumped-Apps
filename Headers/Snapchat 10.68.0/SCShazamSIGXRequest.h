//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, SCSentinel;

@interface SCShazamSIGXRequest : NSObject
{
    SCSentinel *_sentinel;
    NSData *_data;
}

@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isCancelled;
- (void)cancel;
- (id)initWithData:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@protocol OGLAccountService;

@interface GBTAggregateAccountServiceError : NSError
{
    NSError *_originalError;
    id <OGLAccountService> _sourceService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <OGLAccountService> sourceService; // @synthesize sourceService=_sourceService;
@property(readonly, nonatomic) NSError *originalError; // @synthesize originalError=_originalError;
- (id)initWithOriginalError:(id)arg1 fromService:(id)arg2;

@end


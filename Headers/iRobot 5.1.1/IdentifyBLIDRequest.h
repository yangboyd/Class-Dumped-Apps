//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebServiceRequest.h"

@class NSString;

@interface IdentifyBLIDRequest : WebServiceRequest
{
    NSString *_BLID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *BLID; // @synthesize BLID=_BLID;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBLID:(id)arg1;

@end


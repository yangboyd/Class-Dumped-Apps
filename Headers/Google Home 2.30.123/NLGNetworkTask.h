//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSMutableData, NSURLRequest;
@protocol NLGNetworkRequestDelegate;

@interface NLGNetworkTask : NSObject <NSSecureCoding>
{
    NSMutableData *_data;
    NSURLRequest *_request;
    id <NLGNetworkRequestDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) id <NLGNetworkRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)taskDidFinishDownloadingToURL:(id)arg1;
- (void)taskDidCompleteWithResponse:(id)arg1 error:(id)arg2;
- (void)taskDidReceiveData:(id)arg1;
- (void)taskIsWaitingForConnectivity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 data:(id)arg3;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;

@end


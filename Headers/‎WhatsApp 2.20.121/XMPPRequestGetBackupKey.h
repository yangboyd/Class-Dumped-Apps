//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPRequest.h>

@interface XMPPRequestGetBackupKey : XMPPRequest
{
}

- (void)didFailWithError:(id)arg1;
- (void)didSucceedWithResponse:(id)arg1;
- (id)initWithAccountHash:(id)arg1 serverSalt:(id)arg2 serverVersion:(unsigned char)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithTimeout:(double)arg1;

@end


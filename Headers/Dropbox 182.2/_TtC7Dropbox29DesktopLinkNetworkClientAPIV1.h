//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBRestClientDelegateRemoteInstall-Protocol.h"

@interface _TtC7Dropbox29DesktopLinkNetworkClientAPIV1 : NSObject <DBRestClientDelegateRemoteInstall>
{
    // Error parsing type: , name: restClient
    // Error parsing type: , name: successBlock
    // Error parsing type: , name: failBlock
}

- (void).cxx_destruct;
- (id)init;
- (void)restClient:(id)arg1 remoteInstallFailedWithError:(id)arg2 forToken:(id)arg3;
- (void)restClient:(id)arg1 remoteInstallCommittedSuccessfullyWithExtra:(id)arg2;

@end


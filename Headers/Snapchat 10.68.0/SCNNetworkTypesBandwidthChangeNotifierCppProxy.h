//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesBandwidthChangeNotifier-Protocol.h"

@interface SCNNetworkTypesBandwidthChangeNotifierCppProxy : NSObject <SCNNetworkTypesBandwidthChangeNotifier>
{
    struct Handle<std::__1::shared_ptr<snap::network_types::BandwidthChangeNotifier>, std::__1::shared_ptr<snap::network_types::BandwidthChangeNotifier>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)registerUploadListener:(id)arg1;
- (long long)registerDownloadListener:(id)arg1;
- (void)notifyUploadListeners:(long long)arg1;
- (void)notifyDownloadListeners:(long long)arg1;
- (id)initWithCpp:(const shared_ptr_78c8ff1a *)arg1;

@end


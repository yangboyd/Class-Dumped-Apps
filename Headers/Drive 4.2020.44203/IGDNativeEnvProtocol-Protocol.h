//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue;

@protocol IGDNativeEnvProtocol <JSExport>
- (void)setPairIDHighBytes:(long long)arg1 lowBytes:(long long)arg2;
- (JSValue *)executeBridgeOperation:(id)arg1;

@optional
- (void)setPairIDHighBytes:(long long)arg1 lowBytes:(long long)arg2 __JS_EXPORT_AS__0:(id)arg3;
- (JSValue *)executeBridgeOperation:(id)arg1 __JS_EXPORT_AS__br:(id)arg2;
@end


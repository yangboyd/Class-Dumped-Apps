//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRCore : NSObject
{
    struct Handle<std::__1::shared_ptr<core::Core>, std::__1::shared_ptr<core::Core>> _cppRefHandle;
}

+ (void)setThreadCreator:(id)arg1;
+ (id)logTag;
+ (void)setLogTag:(id)arg1;
+ (long long)logLevel;
+ (void)setLogLevel:(long long)arg1;
+ (void)setLogger:(id)arg1;
+ (id)codename;
+ (id)version;
+ (id)copyright;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const shared_ptr_5a8d9358 *)cppRef;
- (id)initWithCpp:(const shared_ptr_5a8d9358 *)arg1;

@end


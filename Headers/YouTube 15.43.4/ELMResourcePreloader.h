//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ELMResourcePreloader : NSObject
{
    struct Handle<std::__1::shared_ptr<youtube::elements::interfaces::ResourcePreloader>, std::__1::shared_ptr<youtube::elements::interfaces::ResourcePreloader>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)ensureLoaded:(id)arg1 requiredLoadState:(long long)arg2;
- (id)loadAll;
- (id)initWithCpp:(const shared_ptr_3dc986d0 *)arg1;

@end


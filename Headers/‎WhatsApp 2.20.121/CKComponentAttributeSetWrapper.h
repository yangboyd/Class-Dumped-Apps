//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKComponentAttributeSetWrapper : NSObject
{
    int _tokenSerial;
    _Bool _suppressApply;
    int _tokenSerialBaseline;
    struct shared_ptr<const std::__1::unordered_map<CKComponentViewAttribute, CKBoxedValue>> _attributes;
    struct vector<CK::Component::OptimisticViewMutationInfo, std::__1::allocator<CK::Component::OptimisticViewMutationInfo>> _optimisticViewMutations;
    struct vector<void (^)(UIView *), std::__1::allocator<void (^)(UIView *)>> _optimisticViewMutationTeardowns_Old;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end


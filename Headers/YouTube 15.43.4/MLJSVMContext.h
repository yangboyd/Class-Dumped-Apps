//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLJSVMContext : NSObject
{
    unique_ptr_e650add7 _context;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Context *context;
- (id)initWithOwnedContext:(unique_ptr_e650add7 *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GULSwizzler : NSObject
{
}

+ (id)ivarObjectsForObject:(id)arg1;
+ (_Bool)selector:(SEL)arg1 existsInClass:(Class)arg2 isClassSelector:(_Bool)arg3;
+ (CDUnknownFunctionPointerType)currentImplementationForClass:(Class)arg1 selector:(SEL)arg2 isClassSelector:(_Bool)arg3;
+ (CDUnknownFunctionPointerType)originalImplementationForClass:(Class)arg1 selector:(SEL)arg2 isClassSelector:(_Bool)arg3;
+ (void)unswizzleClass:(Class)arg1 selector:(SEL)arg2 isClassSelector:(_Bool)arg3;
+ (void)swizzleClass:(Class)arg1 selector:(SEL)arg2 isClassSelector:(_Bool)arg3 withBlock:(id)arg4;

@end


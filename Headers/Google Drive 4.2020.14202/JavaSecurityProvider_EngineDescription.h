//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JavaSecurityProvider_EngineDescription : NSObject
{
    NSString *name_;
    _Bool supportsParameter_;
    NSString *constructorParameterClassName_;
    unsigned long long constructorParameterClass_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)getConstructorParameterClass;
- (id)initWithNSString:(id)arg1 withBoolean:(_Bool)arg2 withNSString:(id)arg3;

@end


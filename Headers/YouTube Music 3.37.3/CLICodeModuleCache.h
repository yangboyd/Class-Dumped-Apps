//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface CLICodeModuleCache : NSObject
{
    NSMutableArray *_modules;
    NSMutableSet *_modulesInMainBundle;
    vector_afed86a5 _baseAddresses;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mainBundlePath;
- (void)loadModules;
- (_Bool)isCompileTimeConstantString:(id)arg1;
- (id)codeModulesInAppBundle;
- (id)codeModuleForAddress:(long long)arg1;
- (void)removeCodeModuleWithBaseAddress:(long long)arg1;
- (void)addCodeModule:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, Protocol;
@protocol ASKExtension;

@interface ASKExtensionPointBuilder : NSObject
{
    NSString *_name;
    NSMutableArray<ASKExtension> *_extensions;
    Class _class;
    NSDictionary *_factory;
    Protocol *_protocol;
    unsigned long long _scope;
}

@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSDictionary *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) Class class; // @synthesize class=_class;
@property(retain, nonatomic) NSMutableArray<ASKExtension> *extensions; // @synthesize extensions=_extensions;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)validate;
- (id)build;
- (void)addExtensionScope:(id)arg1;
- (void)addFactory:(id)arg1;
- (void)addExtension:(id)arg1;
- (id)initWithName:(id)arg1;

@end


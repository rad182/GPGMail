/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCAuthScheme, MFMailAccount, NSButton, NSPopUpButton, NSTextField, NSView, SpecialMailboxes;

@interface AccountDetails : NSObject
{
    Class _accountClass;
    NSView *_detailView;
    NSTextField *_portNumberField;
    NSButton *_configureDynamically;
    NSButton *_autoFetch;
    NSButton *_sslSwitch;
    NSPopUpButton *_authenticationPopup;
    NSButton *_useMailDrop;
    MFMailAccount *_account;
    SpecialMailboxes *_specialMailboxes;
    MCAuthScheme *_authScheme;
}

+ (id)accountDetailsNibName;
+ (id)accountDetailsForAccountClass:(Class)arg1;
@property(nonatomic) __weak MCAuthScheme *authScheme; // @synthesize authScheme=_authScheme;
@property(retain, nonatomic) SpecialMailboxes *specialMailboxes; // @synthesize specialMailboxes=_specialMailboxes;
@property(retain, nonatomic) MFMailAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak NSButton *useMailDrop; // @synthesize useMailDrop=_useMailDrop;
@property(nonatomic) __weak NSPopUpButton *authenticationPopup; // @synthesize authenticationPopup=_authenticationPopup;
@property(nonatomic) __weak NSButton *sslSwitch; // @synthesize sslSwitch=_sslSwitch;
@property(nonatomic) __weak NSButton *autoFetch; // @synthesize autoFetch=_autoFetch;
@property(nonatomic) __weak NSButton *configureDynamically; // @synthesize configureDynamically=_configureDynamically;
@property(nonatomic) __weak NSTextField *portNumberField; // @synthesize portNumberField=_portNumberField;
@property(retain, nonatomic) NSView *detailView; // @synthesize detailView=_detailView;
- (void).cxx_destruct;
- (void)_specialMailboxesDidChange:(id)arg1;
- (void)authenticationChanged:(id)arg1;
- (void)sslChanged:(id)arg1;
- (id)portFieldForSSLCheckBox:(id)arg1;
- (void)didDisplayTabViewItem:(id)arg1;
- (id)setupSpecialMailboxesUIFromValuesInAccount:(id)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (void)setupAccountFromValuesInSpecialMailboxesUI:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (Class)accountClass;
- (void)dealloc;
- (id)init;
- (id)initWithAccountClass:(Class)arg1;

@end


/**
 * Copyright © 2017 MUS.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#import <UIKit/UIKit.h>

@interface ActionSheet : UIControl<UITableViewDataSource,UITableViewDelegate>


typedef void (^DidTapAtIndexPath)(NSIndexPath *indexPath);
@property (copy, nonatomic) DidTapAtIndexPath SelectedAtIndexPath;


@property (strong, nonatomic) UIView *containerView;
@property (strong, nonatomic) UIView *shadowView;
@property (strong, nonatomic) UILabel *lblTitle;
@property (strong, nonatomic) UITableView *tableView;

@property (strong, nonatomic) NSArray *items;
@property (strong, nonatomic) NSArray *images;

-(void)showActionSheetWithTitle:(NSString *)title scrollEnable:(BOOL)scrollEnable;
-(void)hide;

@end


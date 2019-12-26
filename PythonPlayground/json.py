# %% 读取json文件的函数
import os
import json


def __print_curdir():
    print(f"Current dir: {os.path.abspath(os.curdir)}")


def parse_json_file(json_path, *arg, **kwargs):
    try:
        with open(json_path) as f:
            return json.load(f, *arg, **kwargs)
    except Exception as err:
        __print_curdir()
        raise err


def write_json_file(obj: object, json_path, indent=4, *arg, **kwargs):
    try:
        with open(json_path, "w") as f:
            json.dump(obj, f, indent=indent, *arg, **kwargs)
            print("Object saved:")
            print(obj)
    except Exception as err:
        __print_curdir()
        raise err


# %% 测试读取
json_path = './res/example.json'

data = parse_json_file(json_path)
print(data)

# %% 测试存储
write_json_file(data, './test.json',)


# %%
